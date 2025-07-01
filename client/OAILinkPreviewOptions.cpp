/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAILinkPreviewOptions.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAILinkPreviewOptions::OAILinkPreviewOptions(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILinkPreviewOptions::OAILinkPreviewOptions() {
    this->initializeModel();
}

OAILinkPreviewOptions::~OAILinkPreviewOptions() {}

void OAILinkPreviewOptions::initializeModel() {

    m_is_disabled_isSet = false;
    m_is_disabled_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_prefer_small_media_isSet = false;
    m_prefer_small_media_isValid = false;

    m_prefer_large_media_isSet = false;
    m_prefer_large_media_isValid = false;

    m_show_above_text_isSet = false;
    m_show_above_text_isValid = false;
}

void OAILinkPreviewOptions::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILinkPreviewOptions::fromJsonObject(QJsonObject json) {

    m_is_disabled_isValid = ::tele_rest::fromJsonValue(m_is_disabled, json[QString("is_disabled")]);
    m_is_disabled_isSet = !json[QString("is_disabled")].isNull() && m_is_disabled_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_prefer_small_media_isValid = ::tele_rest::fromJsonValue(m_prefer_small_media, json[QString("prefer_small_media")]);
    m_prefer_small_media_isSet = !json[QString("prefer_small_media")].isNull() && m_prefer_small_media_isValid;

    m_prefer_large_media_isValid = ::tele_rest::fromJsonValue(m_prefer_large_media, json[QString("prefer_large_media")]);
    m_prefer_large_media_isSet = !json[QString("prefer_large_media")].isNull() && m_prefer_large_media_isValid;

    m_show_above_text_isValid = ::tele_rest::fromJsonValue(m_show_above_text, json[QString("show_above_text")]);
    m_show_above_text_isSet = !json[QString("show_above_text")].isNull() && m_show_above_text_isValid;
}

QString OAILinkPreviewOptions::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILinkPreviewOptions::asJsonObject() const {
    QJsonObject obj;
    if (m_is_disabled_isSet) {
        obj.insert(QString("is_disabled"), ::tele_rest::toJsonValue(m_is_disabled));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_prefer_small_media_isSet) {
        obj.insert(QString("prefer_small_media"), ::tele_rest::toJsonValue(m_prefer_small_media));
    }
    if (m_prefer_large_media_isSet) {
        obj.insert(QString("prefer_large_media"), ::tele_rest::toJsonValue(m_prefer_large_media));
    }
    if (m_show_above_text_isSet) {
        obj.insert(QString("show_above_text"), ::tele_rest::toJsonValue(m_show_above_text));
    }
    return obj;
}

bool OAILinkPreviewOptions::isIsDisabled() const {
    return m_is_disabled;
}
void OAILinkPreviewOptions::setIsDisabled(const bool &is_disabled) {
    m_is_disabled = is_disabled;
    m_is_disabled_isSet = true;
}

bool OAILinkPreviewOptions::is_is_disabled_Set() const{
    return m_is_disabled_isSet;
}

bool OAILinkPreviewOptions::is_is_disabled_Valid() const{
    return m_is_disabled_isValid;
}

QString OAILinkPreviewOptions::getUrl() const {
    return m_url;
}
void OAILinkPreviewOptions::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAILinkPreviewOptions::is_url_Set() const{
    return m_url_isSet;
}

bool OAILinkPreviewOptions::is_url_Valid() const{
    return m_url_isValid;
}

bool OAILinkPreviewOptions::isPreferSmallMedia() const {
    return m_prefer_small_media;
}
void OAILinkPreviewOptions::setPreferSmallMedia(const bool &prefer_small_media) {
    m_prefer_small_media = prefer_small_media;
    m_prefer_small_media_isSet = true;
}

bool OAILinkPreviewOptions::is_prefer_small_media_Set() const{
    return m_prefer_small_media_isSet;
}

bool OAILinkPreviewOptions::is_prefer_small_media_Valid() const{
    return m_prefer_small_media_isValid;
}

bool OAILinkPreviewOptions::isPreferLargeMedia() const {
    return m_prefer_large_media;
}
void OAILinkPreviewOptions::setPreferLargeMedia(const bool &prefer_large_media) {
    m_prefer_large_media = prefer_large_media;
    m_prefer_large_media_isSet = true;
}

bool OAILinkPreviewOptions::is_prefer_large_media_Set() const{
    return m_prefer_large_media_isSet;
}

bool OAILinkPreviewOptions::is_prefer_large_media_Valid() const{
    return m_prefer_large_media_isValid;
}

bool OAILinkPreviewOptions::isShowAboveText() const {
    return m_show_above_text;
}
void OAILinkPreviewOptions::setShowAboveText(const bool &show_above_text) {
    m_show_above_text = show_above_text;
    m_show_above_text_isSet = true;
}

bool OAILinkPreviewOptions::is_show_above_text_Set() const{
    return m_show_above_text_isSet;
}

bool OAILinkPreviewOptions::is_show_above_text_Valid() const{
    return m_show_above_text_isValid;
}

bool OAILinkPreviewOptions::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_is_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prefer_small_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prefer_large_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_above_text_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILinkPreviewOptions::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
