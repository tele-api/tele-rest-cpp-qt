/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIStickerSet.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStickerSet::OAIStickerSet(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStickerSet::OAIStickerSet() {
    this->initializeModel();
}

OAIStickerSet::~OAIStickerSet() {}

void OAIStickerSet::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_sticker_type_isSet = false;
    m_sticker_type_isValid = false;

    m_stickers_isSet = false;
    m_stickers_isValid = false;

    m_thumbnail_isSet = false;
    m_thumbnail_isValid = false;
}

void OAIStickerSet::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStickerSet::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_sticker_type_isValid = ::tele_rest::fromJsonValue(m_sticker_type, json[QString("sticker_type")]);
    m_sticker_type_isSet = !json[QString("sticker_type")].isNull() && m_sticker_type_isValid;

    m_stickers_isValid = ::tele_rest::fromJsonValue(m_stickers, json[QString("stickers")]);
    m_stickers_isSet = !json[QString("stickers")].isNull() && m_stickers_isValid;

    m_thumbnail_isValid = ::tele_rest::fromJsonValue(m_thumbnail, json[QString("thumbnail")]);
    m_thumbnail_isSet = !json[QString("thumbnail")].isNull() && m_thumbnail_isValid;
}

QString OAIStickerSet::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStickerSet::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_sticker_type_isSet) {
        obj.insert(QString("sticker_type"), ::tele_rest::toJsonValue(m_sticker_type));
    }
    if (m_stickers.size() > 0) {
        obj.insert(QString("stickers"), ::tele_rest::toJsonValue(m_stickers));
    }
    if (m_thumbnail.isSet()) {
        obj.insert(QString("thumbnail"), ::tele_rest::toJsonValue(m_thumbnail));
    }
    return obj;
}

QString OAIStickerSet::getName() const {
    return m_name;
}
void OAIStickerSet::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIStickerSet::is_name_Set() const{
    return m_name_isSet;
}

bool OAIStickerSet::is_name_Valid() const{
    return m_name_isValid;
}

QString OAIStickerSet::getTitle() const {
    return m_title;
}
void OAIStickerSet::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIStickerSet::is_title_Set() const{
    return m_title_isSet;
}

bool OAIStickerSet::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIStickerSet::getStickerType() const {
    return m_sticker_type;
}
void OAIStickerSet::setStickerType(const QString &sticker_type) {
    m_sticker_type = sticker_type;
    m_sticker_type_isSet = true;
}

bool OAIStickerSet::is_sticker_type_Set() const{
    return m_sticker_type_isSet;
}

bool OAIStickerSet::is_sticker_type_Valid() const{
    return m_sticker_type_isValid;
}

QList<OAISticker> OAIStickerSet::getStickers() const {
    return m_stickers;
}
void OAIStickerSet::setStickers(const QList<OAISticker> &stickers) {
    m_stickers = stickers;
    m_stickers_isSet = true;
}

bool OAIStickerSet::is_stickers_Set() const{
    return m_stickers_isSet;
}

bool OAIStickerSet::is_stickers_Valid() const{
    return m_stickers_isValid;
}

OAIPhotoSize OAIStickerSet::getThumbnail() const {
    return m_thumbnail;
}
void OAIStickerSet::setThumbnail(const OAIPhotoSize &thumbnail) {
    m_thumbnail = thumbnail;
    m_thumbnail_isSet = true;
}

bool OAIStickerSet::is_thumbnail_Set() const{
    return m_thumbnail_isSet;
}

bool OAIStickerSet::is_thumbnail_Valid() const{
    return m_thumbnail_isValid;
}

bool OAIStickerSet::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_stickers.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_thumbnail.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStickerSet::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_title_isValid && m_sticker_type_isValid && m_stickers_isValid && true;
}

} // namespace tele_rest
