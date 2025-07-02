/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

/*
 * OAIWebhookInfo.h
 *
 * Describes the current status of a webhook.
 */

#ifndef OAIWebhookInfo_H
#define OAIWebhookInfo_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIWebhookInfo : public OAIObject {
public:
    OAIWebhookInfo();
    OAIWebhookInfo(QString json);
    ~OAIWebhookInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    bool isHasCustomCertificate() const;
    void setHasCustomCertificate(const bool &has_custom_certificate);
    bool is_has_custom_certificate_Set() const;
    bool is_has_custom_certificate_Valid() const;

    qint32 getPendingUpdateCount() const;
    void setPendingUpdateCount(const qint32 &pending_update_count);
    bool is_pending_update_count_Set() const;
    bool is_pending_update_count_Valid() const;

    QString getIpAddress() const;
    void setIpAddress(const QString &ip_address);
    bool is_ip_address_Set() const;
    bool is_ip_address_Valid() const;

    qint32 getLastErrorDate() const;
    void setLastErrorDate(const qint32 &last_error_date);
    bool is_last_error_date_Set() const;
    bool is_last_error_date_Valid() const;

    QString getLastErrorMessage() const;
    void setLastErrorMessage(const QString &last_error_message);
    bool is_last_error_message_Set() const;
    bool is_last_error_message_Valid() const;

    qint32 getLastSynchronizationErrorDate() const;
    void setLastSynchronizationErrorDate(const qint32 &last_synchronization_error_date);
    bool is_last_synchronization_error_date_Set() const;
    bool is_last_synchronization_error_date_Valid() const;

    qint32 getMaxConnections() const;
    void setMaxConnections(const qint32 &max_connections);
    bool is_max_connections_Set() const;
    bool is_max_connections_Valid() const;

    QList<QString> getAllowedUpdates() const;
    void setAllowedUpdates(const QList<QString> &allowed_updates);
    bool is_allowed_updates_Set() const;
    bool is_allowed_updates_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    bool m_has_custom_certificate;
    bool m_has_custom_certificate_isSet;
    bool m_has_custom_certificate_isValid;

    qint32 m_pending_update_count;
    bool m_pending_update_count_isSet;
    bool m_pending_update_count_isValid;

    QString m_ip_address;
    bool m_ip_address_isSet;
    bool m_ip_address_isValid;

    qint32 m_last_error_date;
    bool m_last_error_date_isSet;
    bool m_last_error_date_isValid;

    QString m_last_error_message;
    bool m_last_error_message_isSet;
    bool m_last_error_message_isValid;

    qint32 m_last_synchronization_error_date;
    bool m_last_synchronization_error_date_isSet;
    bool m_last_synchronization_error_date_isValid;

    qint32 m_max_connections;
    bool m_max_connections_isSet;
    bool m_max_connections_isValid;

    QList<QString> m_allowed_updates;
    bool m_allowed_updates_isSet;
    bool m_allowed_updates_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIWebhookInfo)

#endif // OAIWebhookInfo_H
