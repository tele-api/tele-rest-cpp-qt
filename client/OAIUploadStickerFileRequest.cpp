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

#include "OAIUploadStickerFileRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUploadStickerFileRequest::OAIUploadStickerFileRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUploadStickerFileRequest::OAIUploadStickerFileRequest() {
    this->initializeModel();
}

OAIUploadStickerFileRequest::~OAIUploadStickerFileRequest() {}

void OAIUploadStickerFileRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_sticker_format_isSet = false;
    m_sticker_format_isValid = false;
}

void OAIUploadStickerFileRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUploadStickerFileRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_sticker_format_isValid = ::tele_rest::fromJsonValue(m_sticker_format, json[QString("sticker_format")]);
    m_sticker_format_isSet = !json[QString("sticker_format")].isNull() && m_sticker_format_isValid;
}

QString OAIUploadStickerFileRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUploadStickerFileRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_sticker_isSet) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_sticker_format_isSet) {
        obj.insert(QString("sticker_format"), ::tele_rest::toJsonValue(m_sticker_format));
    }
    return obj;
}

qint32 OAIUploadStickerFileRequest::getUserId() const {
    return m_user_id;
}
void OAIUploadStickerFileRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIUploadStickerFileRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIUploadStickerFileRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

QJsonValue OAIUploadStickerFileRequest::getSticker() const {
    return m_sticker;
}
void OAIUploadStickerFileRequest::setSticker(const QJsonValue &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAIUploadStickerFileRequest::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAIUploadStickerFileRequest::is_sticker_Valid() const{
    return m_sticker_isValid;
}

QString OAIUploadStickerFileRequest::getStickerFormat() const {
    return m_sticker_format;
}
void OAIUploadStickerFileRequest::setStickerFormat(const QString &sticker_format) {
    m_sticker_format = sticker_format;
    m_sticker_format_isSet = true;
}

bool OAIUploadStickerFileRequest::is_sticker_format_Set() const{
    return m_sticker_format_isSet;
}

bool OAIUploadStickerFileRequest::is_sticker_format_Valid() const{
    return m_sticker_format_isValid;
}

bool OAIUploadStickerFileRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker_format_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUploadStickerFileRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_sticker_isValid && m_sticker_format_isValid && true;
}

} // namespace tele_rest
