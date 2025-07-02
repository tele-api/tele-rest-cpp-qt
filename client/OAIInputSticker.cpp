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

#include "OAIInputSticker.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputSticker::OAIInputSticker(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputSticker::OAIInputSticker() {
    this->initializeModel();
}

OAIInputSticker::~OAIInputSticker() {}

void OAIInputSticker::initializeModel() {

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_format_isSet = false;
    m_format_isValid = false;

    m_emoji_list_isSet = false;
    m_emoji_list_isValid = false;

    m_mask_position_isSet = false;
    m_mask_position_isValid = false;

    m_keywords_isSet = false;
    m_keywords_isValid = false;
}

void OAIInputSticker::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputSticker::fromJsonObject(QJsonObject json) {

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_format_isValid = ::tele_rest::fromJsonValue(m_format, json[QString("format")]);
    m_format_isSet = !json[QString("format")].isNull() && m_format_isValid;

    m_emoji_list_isValid = ::tele_rest::fromJsonValue(m_emoji_list, json[QString("emoji_list")]);
    m_emoji_list_isSet = !json[QString("emoji_list")].isNull() && m_emoji_list_isValid;

    m_mask_position_isValid = ::tele_rest::fromJsonValue(m_mask_position, json[QString("mask_position")]);
    m_mask_position_isSet = !json[QString("mask_position")].isNull() && m_mask_position_isValid;

    m_keywords_isValid = ::tele_rest::fromJsonValue(m_keywords, json[QString("keywords")]);
    m_keywords_isSet = !json[QString("keywords")].isNull() && m_keywords_isValid;
}

QString OAIInputSticker::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputSticker::asJsonObject() const {
    QJsonObject obj;
    if (m_sticker_isSet) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_format_isSet) {
        obj.insert(QString("format"), ::tele_rest::toJsonValue(m_format));
    }
    if (m_emoji_list.size() > 0) {
        obj.insert(QString("emoji_list"), ::tele_rest::toJsonValue(m_emoji_list));
    }
    if (m_mask_position.isSet()) {
        obj.insert(QString("mask_position"), ::tele_rest::toJsonValue(m_mask_position));
    }
    if (m_keywords.size() > 0) {
        obj.insert(QString("keywords"), ::tele_rest::toJsonValue(m_keywords));
    }
    return obj;
}

QString OAIInputSticker::getSticker() const {
    return m_sticker;
}
void OAIInputSticker::setSticker(const QString &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAIInputSticker::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAIInputSticker::is_sticker_Valid() const{
    return m_sticker_isValid;
}

QString OAIInputSticker::getFormat() const {
    return m_format;
}
void OAIInputSticker::setFormat(const QString &format) {
    m_format = format;
    m_format_isSet = true;
}

bool OAIInputSticker::is_format_Set() const{
    return m_format_isSet;
}

bool OAIInputSticker::is_format_Valid() const{
    return m_format_isValid;
}

QList<QString> OAIInputSticker::getEmojiList() const {
    return m_emoji_list;
}
void OAIInputSticker::setEmojiList(const QList<QString> &emoji_list) {
    m_emoji_list = emoji_list;
    m_emoji_list_isSet = true;
}

bool OAIInputSticker::is_emoji_list_Set() const{
    return m_emoji_list_isSet;
}

bool OAIInputSticker::is_emoji_list_Valid() const{
    return m_emoji_list_isValid;
}

OAIMaskPosition OAIInputSticker::getMaskPosition() const {
    return m_mask_position;
}
void OAIInputSticker::setMaskPosition(const OAIMaskPosition &mask_position) {
    m_mask_position = mask_position;
    m_mask_position_isSet = true;
}

bool OAIInputSticker::is_mask_position_Set() const{
    return m_mask_position_isSet;
}

bool OAIInputSticker::is_mask_position_Valid() const{
    return m_mask_position_isValid;
}

QList<QString> OAIInputSticker::getKeywords() const {
    return m_keywords;
}
void OAIInputSticker::setKeywords(const QList<QString> &keywords) {
    m_keywords = keywords;
    m_keywords_isSet = true;
}

bool OAIInputSticker::is_keywords_Set() const{
    return m_keywords_isSet;
}

bool OAIInputSticker::is_keywords_Valid() const{
    return m_keywords_isValid;
}

bool OAIInputSticker::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sticker_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_format_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_list.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_mask_position.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_keywords.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputSticker::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sticker_isValid && m_format_isValid && m_emoji_list_isValid && true;
}

} // namespace tele_rest
